// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDBATCHAXGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BINDBATCHAXGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BindBatchAxgResponseBodySecretBindList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindBatchAxgResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindBatchAxgResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretBindList, secretBindList_);
    };
    friend void from_json(const Darabonba::Json& j, BindBatchAxgResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretBindList, secretBindList_);
    };
    BindBatchAxgResponseBody() = default ;
    BindBatchAxgResponseBody(const BindBatchAxgResponseBody &) = default ;
    BindBatchAxgResponseBody(BindBatchAxgResponseBody &&) = default ;
    BindBatchAxgResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindBatchAxgResponseBody() = default ;
    BindBatchAxgResponseBody& operator=(const BindBatchAxgResponseBody &) = default ;
    BindBatchAxgResponseBody& operator=(BindBatchAxgResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->secretBindList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BindBatchAxgResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BindBatchAxgResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BindBatchAxgResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretBindList Field Functions 
    bool hasSecretBindList() const { return this->secretBindList_ != nullptr;};
    void deleteSecretBindList() { this->secretBindList_ = nullptr;};
    inline const BindBatchAxgResponseBodySecretBindList & secretBindList() const { DARABONBA_PTR_GET_CONST(secretBindList_, BindBatchAxgResponseBodySecretBindList) };
    inline BindBatchAxgResponseBodySecretBindList secretBindList() { DARABONBA_PTR_GET(secretBindList_, BindBatchAxgResponseBodySecretBindList) };
    inline BindBatchAxgResponseBody& setSecretBindList(const BindBatchAxgResponseBodySecretBindList & secretBindList) { DARABONBA_PTR_SET_VALUE(secretBindList_, secretBindList) };
    inline BindBatchAxgResponseBody& setSecretBindList(BindBatchAxgResponseBodySecretBindList && secretBindList) { DARABONBA_PTR_SET_RVALUE(secretBindList_, secretBindList) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<BindBatchAxgResponseBodySecretBindList> secretBindList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
