// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSAGREMOTEACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSAGREMOTEACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifySagRemoteAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySagRemoteAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RemoteAccessIp, remoteAccessIp_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySagRemoteAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RemoteAccessIp, remoteAccessIp_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifySagRemoteAccessResponseBody() = default ;
    ModifySagRemoteAccessResponseBody(const ModifySagRemoteAccessResponseBody &) = default ;
    ModifySagRemoteAccessResponseBody(ModifySagRemoteAccessResponseBody &&) = default ;
    ModifySagRemoteAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySagRemoteAccessResponseBody() = default ;
    ModifySagRemoteAccessResponseBody& operator=(const ModifySagRemoteAccessResponseBody &) = default ;
    ModifySagRemoteAccessResponseBody& operator=(ModifySagRemoteAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->remoteAccessIp_ == nullptr && this->requestId_ == nullptr && this->serialNumber_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifySagRemoteAccessResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifySagRemoteAccessResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // remoteAccessIp Field Functions 
    bool hasRemoteAccessIp() const { return this->remoteAccessIp_ != nullptr;};
    void deleteRemoteAccessIp() { this->remoteAccessIp_ = nullptr;};
    inline string getRemoteAccessIp() const { DARABONBA_PTR_GET_DEFAULT(remoteAccessIp_, "") };
    inline ModifySagRemoteAccessResponseBody& setRemoteAccessIp(string remoteAccessIp) { DARABONBA_PTR_SET_VALUE(remoteAccessIp_, remoteAccessIp) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifySagRemoteAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline ModifySagRemoteAccessResponseBody& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifySagRemoteAccessResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned status code.
    shared_ptr<string> code_ {};
    // The message returned after calling the API.
    shared_ptr<string> message_ {};
    // The remote access IP address.
    shared_ptr<string> remoteAccessIp_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The SN of the SAG device.
    shared_ptr<string> serialNumber_ {};
    // Indicates whether the API call is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
