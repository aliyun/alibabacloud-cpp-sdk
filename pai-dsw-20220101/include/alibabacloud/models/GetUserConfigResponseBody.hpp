// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserConfigResponseBodyFreeTier.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetUserConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountSufficient, accountSufficient_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EnableEciDisk, enableEciDisk_);
      DARABONBA_PTR_TO_JSON(FreeTier, freeTier_);
      DARABONBA_PTR_TO_JSON(FreeTierSpecAvailable, freeTierSpecAvailable_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountSufficient, accountSufficient_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EnableEciDisk, enableEciDisk_);
      DARABONBA_PTR_FROM_JSON(FreeTier, freeTier_);
      DARABONBA_PTR_FROM_JSON(FreeTierSpecAvailable, freeTierSpecAvailable_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetUserConfigResponseBody() = default ;
    GetUserConfigResponseBody(const GetUserConfigResponseBody &) = default ;
    GetUserConfigResponseBody(GetUserConfigResponseBody &&) = default ;
    GetUserConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserConfigResponseBody() = default ;
    GetUserConfigResponseBody& operator=(const GetUserConfigResponseBody &) = default ;
    GetUserConfigResponseBody& operator=(GetUserConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountSufficient_ != nullptr
        && this->code_ != nullptr && this->enableEciDisk_ != nullptr && this->freeTier_ != nullptr && this->freeTierSpecAvailable_ != nullptr && this->httpStatusCode_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // accountSufficient Field Functions 
    bool hasAccountSufficient() const { return this->accountSufficient_ != nullptr;};
    void deleteAccountSufficient() { this->accountSufficient_ = nullptr;};
    inline bool accountSufficient() const { DARABONBA_PTR_GET_DEFAULT(accountSufficient_, false) };
    inline GetUserConfigResponseBody& setAccountSufficient(bool accountSufficient) { DARABONBA_PTR_SET_VALUE(accountSufficient_, accountSufficient) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUserConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // enableEciDisk Field Functions 
    bool hasEnableEciDisk() const { return this->enableEciDisk_ != nullptr;};
    void deleteEnableEciDisk() { this->enableEciDisk_ = nullptr;};
    inline bool enableEciDisk() const { DARABONBA_PTR_GET_DEFAULT(enableEciDisk_, false) };
    inline GetUserConfigResponseBody& setEnableEciDisk(bool enableEciDisk) { DARABONBA_PTR_SET_VALUE(enableEciDisk_, enableEciDisk) };


    // freeTier Field Functions 
    bool hasFreeTier() const { return this->freeTier_ != nullptr;};
    void deleteFreeTier() { this->freeTier_ = nullptr;};
    inline const GetUserConfigResponseBodyFreeTier & freeTier() const { DARABONBA_PTR_GET_CONST(freeTier_, GetUserConfigResponseBodyFreeTier) };
    inline GetUserConfigResponseBodyFreeTier freeTier() { DARABONBA_PTR_GET(freeTier_, GetUserConfigResponseBodyFreeTier) };
    inline GetUserConfigResponseBody& setFreeTier(const GetUserConfigResponseBodyFreeTier & freeTier) { DARABONBA_PTR_SET_VALUE(freeTier_, freeTier) };
    inline GetUserConfigResponseBody& setFreeTier(GetUserConfigResponseBodyFreeTier && freeTier) { DARABONBA_PTR_SET_RVALUE(freeTier_, freeTier) };


    // freeTierSpecAvailable Field Functions 
    bool hasFreeTierSpecAvailable() const { return this->freeTierSpecAvailable_ != nullptr;};
    void deleteFreeTierSpecAvailable() { this->freeTierSpecAvailable_ = nullptr;};
    inline bool freeTierSpecAvailable() const { DARABONBA_PTR_GET_DEFAULT(freeTierSpecAvailable_, false) };
    inline GetUserConfigResponseBody& setFreeTierSpecAvailable(bool freeTierSpecAvailable) { DARABONBA_PTR_SET_VALUE(freeTierSpecAvailable_, freeTierSpecAvailable) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetUserConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUserConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUserConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<bool> accountSufficient_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<bool> enableEciDisk_ = nullptr;
    std::shared_ptr<GetUserConfigResponseBodyFreeTier> freeTier_ = nullptr;
    std::shared_ptr<bool> freeTierSpecAvailable_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
