// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDVERIFICATIONCODEFORBINDSECUREMOBILEPHONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDVERIFICATIONCODEFORBINDSECUREMOBILEPHONERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class SendVerificationCodeForBindSecureMobilePhoneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendVerificationCodeForBindSecureMobilePhoneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SendVerificationCodeForBindSecureMobilePhoneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SendVerificationCodeForBindSecureMobilePhoneResponseBody() = default ;
    SendVerificationCodeForBindSecureMobilePhoneResponseBody(const SendVerificationCodeForBindSecureMobilePhoneResponseBody &) = default ;
    SendVerificationCodeForBindSecureMobilePhoneResponseBody(SendVerificationCodeForBindSecureMobilePhoneResponseBody &&) = default ;
    SendVerificationCodeForBindSecureMobilePhoneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendVerificationCodeForBindSecureMobilePhoneResponseBody() = default ;
    SendVerificationCodeForBindSecureMobilePhoneResponseBody& operator=(const SendVerificationCodeForBindSecureMobilePhoneResponseBody &) = default ;
    SendVerificationCodeForBindSecureMobilePhoneResponseBody& operator=(SendVerificationCodeForBindSecureMobilePhoneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expirationDate_ == nullptr
        && this->requestId_ == nullptr; };
    // expirationDate Field Functions 
    bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
    void deleteExpirationDate() { this->expirationDate_ = nullptr;};
    inline string getExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
    inline SendVerificationCodeForBindSecureMobilePhoneResponseBody& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendVerificationCodeForBindSecureMobilePhoneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the verification code expires.
    shared_ptr<string> expirationDate_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
