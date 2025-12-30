// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRULEV4RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDRULEV4RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class AddRuleV4ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRuleV4ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddRuleV4ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddRuleV4ResponseBody() = default ;
    AddRuleV4ResponseBody(const AddRuleV4ResponseBody &) = default ;
    AddRuleV4ResponseBody(AddRuleV4ResponseBody &&) = default ;
    AddRuleV4ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRuleV4ResponseBody() = default ;
    AddRuleV4ResponseBody& operator=(const AddRuleV4ResponseBody &) = default ;
    AddRuleV4ResponseBody& operator=(AddRuleV4ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline const vector<string> & getMessage() const { DARABONBA_PTR_GET_CONST(message_, vector<string>) };
      inline vector<string> getMessage() { DARABONBA_PTR_GET(message_, vector<string>) };
      inline Messages& setMessage(const vector<string> & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
      inline Messages& setMessage(vector<string> && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


    protected:
      shared_ptr<vector<string>> message_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->messages_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddRuleV4ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline int64_t getData() const { DARABONBA_PTR_GET_DEFAULT(data_, 0L) };
    inline AddRuleV4ResponseBody& setData(int64_t data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline AddRuleV4ResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddRuleV4ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const AddRuleV4ResponseBody::Messages & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, AddRuleV4ResponseBody::Messages) };
    inline AddRuleV4ResponseBody::Messages getMessages() { DARABONBA_PTR_GET(messages_, AddRuleV4ResponseBody::Messages) };
    inline AddRuleV4ResponseBody& setMessages(const AddRuleV4ResponseBody::Messages & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline AddRuleV4ResponseBody& setMessages(AddRuleV4ResponseBody::Messages && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddRuleV4ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddRuleV4ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int64_t> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<AddRuleV4ResponseBody::Messages> messages_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
