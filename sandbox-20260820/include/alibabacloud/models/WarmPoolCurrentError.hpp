// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WARMPOOLCURRENTERROR_HPP_
#define ALIBABACLOUD_MODELS_WARMPOOLCURRENTERROR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class WarmPoolCurrentError : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WarmPoolCurrentError& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, WarmPoolCurrentError& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    WarmPoolCurrentError() = default ;
    WarmPoolCurrentError(const WarmPoolCurrentError &) = default ;
    WarmPoolCurrentError(WarmPoolCurrentError &&) = default ;
    WarmPoolCurrentError(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WarmPoolCurrentError() = default ;
    WarmPoolCurrentError& operator=(const WarmPoolCurrentError &) = default ;
    WarmPoolCurrentError& operator=(WarmPoolCurrentError &&) = default ;
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
    inline WarmPoolCurrentError& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline WarmPoolCurrentError& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The error code of the current error.
    shared_ptr<string> code_ {};
    // The description of the current error.
    shared_ptr<string> message_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
