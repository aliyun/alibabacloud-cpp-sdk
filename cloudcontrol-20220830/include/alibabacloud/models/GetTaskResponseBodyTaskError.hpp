// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASKERROR_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASKERROR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetTaskResponseBodyTaskError : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResponseBodyTaskError& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResponseBodyTaskError& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    GetTaskResponseBodyTaskError() = default ;
    GetTaskResponseBodyTaskError(const GetTaskResponseBodyTaskError &) = default ;
    GetTaskResponseBodyTaskError(GetTaskResponseBodyTaskError &&) = default ;
    GetTaskResponseBodyTaskError(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResponseBodyTaskError() = default ;
    GetTaskResponseBodyTaskError& operator=(const GetTaskResponseBodyTaskError &) = default ;
    GetTaskResponseBodyTaskError& operator=(GetTaskResponseBodyTaskError &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTaskResponseBodyTaskError& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTaskResponseBodyTaskError& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The error code.
    std::shared_ptr<string> code_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
