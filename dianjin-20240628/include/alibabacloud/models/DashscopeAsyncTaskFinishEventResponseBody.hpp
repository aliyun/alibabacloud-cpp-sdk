// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DASHSCOPEASYNCTASKFINISHEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DASHSCOPEASYNCTASKFINISHEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class DashscopeAsyncTaskFinishEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DashscopeAsyncTaskFinishEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(retryAble, retryAble_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DashscopeAsyncTaskFinishEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(retryAble, retryAble_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DashscopeAsyncTaskFinishEventResponseBody() = default ;
    DashscopeAsyncTaskFinishEventResponseBody(const DashscopeAsyncTaskFinishEventResponseBody &) = default ;
    DashscopeAsyncTaskFinishEventResponseBody(DashscopeAsyncTaskFinishEventResponseBody &&) = default ;
    DashscopeAsyncTaskFinishEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DashscopeAsyncTaskFinishEventResponseBody() = default ;
    DashscopeAsyncTaskFinishEventResponseBody& operator=(const DashscopeAsyncTaskFinishEventResponseBody &) = default ;
    DashscopeAsyncTaskFinishEventResponseBody& operator=(DashscopeAsyncTaskFinishEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->retryAble_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DashscopeAsyncTaskFinishEventResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DashscopeAsyncTaskFinishEventResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // retryAble Field Functions 
    bool hasRetryAble() const { return this->retryAble_ != nullptr;};
    void deleteRetryAble() { this->retryAble_ = nullptr;};
    inline bool getRetryAble() const { DARABONBA_PTR_GET_DEFAULT(retryAble_, false) };
    inline DashscopeAsyncTaskFinishEventResponseBody& setRetryAble(bool retryAble) { DARABONBA_PTR_SET_VALUE(retryAble_, retryAble) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DashscopeAsyncTaskFinishEventResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<bool> retryAble_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
