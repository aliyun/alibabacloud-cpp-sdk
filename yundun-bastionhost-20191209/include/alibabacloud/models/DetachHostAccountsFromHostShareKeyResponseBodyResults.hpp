// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHHOSTACCOUNTSFROMHOSTSHAREKEYRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DETACHHOSTACCOUNTSFROMHOSTSHAREKEYRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DetachHostAccountsFromHostShareKeyResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachHostAccountsFromHostShareKeyResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_TO_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, DetachHostAccountsFromHostShareKeyResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_FROM_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    DetachHostAccountsFromHostShareKeyResponseBodyResults() = default ;
    DetachHostAccountsFromHostShareKeyResponseBodyResults(const DetachHostAccountsFromHostShareKeyResponseBodyResults &) = default ;
    DetachHostAccountsFromHostShareKeyResponseBodyResults(DetachHostAccountsFromHostShareKeyResponseBodyResults &&) = default ;
    DetachHostAccountsFromHostShareKeyResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachHostAccountsFromHostShareKeyResponseBodyResults() = default ;
    DetachHostAccountsFromHostShareKeyResponseBodyResults& operator=(const DetachHostAccountsFromHostShareKeyResponseBodyResults &) = default ;
    DetachHostAccountsFromHostShareKeyResponseBodyResults& operator=(DetachHostAccountsFromHostShareKeyResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->hostAccountId_ != nullptr && this->hostShareKeyId_ != nullptr && this->message_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DetachHostAccountsFromHostShareKeyResponseBodyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hostAccountId Field Functions 
    bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
    void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
    inline string hostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
    inline DetachHostAccountsFromHostShareKeyResponseBodyResults& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


    // hostShareKeyId Field Functions 
    bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
    void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
    inline string hostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
    inline DetachHostAccountsFromHostShareKeyResponseBodyResults& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DetachHostAccountsFromHostShareKeyResponseBodyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The error code returned. If **OK** is returned, the disassociation was successful. If a different error code is returned, the disassociation failed.
    std::shared_ptr<string> code_ = nullptr;
    // The ID of the host account.
    std::shared_ptr<string> hostAccountId_ = nullptr;
    // The ID of the shared key.
    std::shared_ptr<string> hostShareKeyId_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
