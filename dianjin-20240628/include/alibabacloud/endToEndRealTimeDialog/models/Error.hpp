// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_ERROR_HPP_
#define ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_ERROR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace EndToEndRealTimeDialog
{
namespace Models
{
  class Error : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Error& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, Error& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    Error() = default ;
    Error(const Error &) = default ;
    Error(Error &&) = default ;
    Error(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Error() = default ;
    Error& operator=(const Error &) = default ;
    Error& operator=(Error &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
} // namespace EndToEndRealTimeDialog
#endif
