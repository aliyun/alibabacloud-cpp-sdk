// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUNREADMESSAGECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUNREADMESSAGECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetUnreadMessageCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUnreadMessageCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetUnreadMessageCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetUnreadMessageCountResponseBody() = default ;
    GetUnreadMessageCountResponseBody(const GetUnreadMessageCountResponseBody &) = default ;
    GetUnreadMessageCountResponseBody(GetUnreadMessageCountResponseBody &&) = default ;
    GetUnreadMessageCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUnreadMessageCountResponseBody() = default ;
    GetUnreadMessageCountResponseBody& operator=(const GetUnreadMessageCountResponseBody &) = default ;
    GetUnreadMessageCountResponseBody& operator=(GetUnreadMessageCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->result_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUnreadMessageCountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUnreadMessageCountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline int32_t result() const { DARABONBA_PTR_GET_DEFAULT(result_, 0) };
    inline GetUnreadMessageCountResponseBody& setResult(int32_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int32_t> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
