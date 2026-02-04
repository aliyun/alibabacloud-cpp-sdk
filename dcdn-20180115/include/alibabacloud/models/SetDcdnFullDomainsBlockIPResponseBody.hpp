// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDCDNFULLDOMAINSBLOCKIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETDCDNFULLDOMAINSBLOCKIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class SetDcdnFullDomainsBlockIPResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDcdnFullDomainsBlockIPResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDcdnFullDomainsBlockIPResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetDcdnFullDomainsBlockIPResponseBody() = default ;
    SetDcdnFullDomainsBlockIPResponseBody(const SetDcdnFullDomainsBlockIPResponseBody &) = default ;
    SetDcdnFullDomainsBlockIPResponseBody(SetDcdnFullDomainsBlockIPResponseBody &&) = default ;
    SetDcdnFullDomainsBlockIPResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDcdnFullDomainsBlockIPResponseBody() = default ;
    SetDcdnFullDomainsBlockIPResponseBody& operator=(const SetDcdnFullDomainsBlockIPResponseBody &) = default ;
    SetDcdnFullDomainsBlockIPResponseBody& operator=(SetDcdnFullDomainsBlockIPResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline SetDcdnFullDomainsBlockIPResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SetDcdnFullDomainsBlockIPResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetDcdnFullDomainsBlockIPResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // If the value of Code is not 0, specific required parameters are missing or the parameter format is invalid.
    shared_ptr<int32_t> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
