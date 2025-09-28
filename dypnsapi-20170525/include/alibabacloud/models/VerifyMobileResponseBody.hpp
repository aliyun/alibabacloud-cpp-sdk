// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYMOBILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYMOBILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VerifyMobileResponseBodyGateVerifyResultDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class VerifyMobileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyMobileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GateVerifyResultDTO, gateVerifyResultDTO_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyMobileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GateVerifyResultDTO, gateVerifyResultDTO_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    VerifyMobileResponseBody() = default ;
    VerifyMobileResponseBody(const VerifyMobileResponseBody &) = default ;
    VerifyMobileResponseBody(VerifyMobileResponseBody &&) = default ;
    VerifyMobileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyMobileResponseBody() = default ;
    VerifyMobileResponseBody& operator=(const VerifyMobileResponseBody &) = default ;
    VerifyMobileResponseBody& operator=(VerifyMobileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->gateVerifyResultDTO_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline VerifyMobileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // gateVerifyResultDTO Field Functions 
    bool hasGateVerifyResultDTO() const { return this->gateVerifyResultDTO_ != nullptr;};
    void deleteGateVerifyResultDTO() { this->gateVerifyResultDTO_ = nullptr;};
    inline const VerifyMobileResponseBodyGateVerifyResultDTO & gateVerifyResultDTO() const { DARABONBA_PTR_GET_CONST(gateVerifyResultDTO_, VerifyMobileResponseBodyGateVerifyResultDTO) };
    inline VerifyMobileResponseBodyGateVerifyResultDTO gateVerifyResultDTO() { DARABONBA_PTR_GET(gateVerifyResultDTO_, VerifyMobileResponseBodyGateVerifyResultDTO) };
    inline VerifyMobileResponseBody& setGateVerifyResultDTO(const VerifyMobileResponseBodyGateVerifyResultDTO & gateVerifyResultDTO) { DARABONBA_PTR_SET_VALUE(gateVerifyResultDTO_, gateVerifyResultDTO) };
    inline VerifyMobileResponseBody& setGateVerifyResultDTO(VerifyMobileResponseBodyGateVerifyResultDTO && gateVerifyResultDTO) { DARABONBA_PTR_SET_RVALUE(gateVerifyResultDTO_, gateVerifyResultDTO) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VerifyMobileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyMobileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   If OK is returned, the request is successful.
    // *   For more information about other error codes, see [API response codes](https://help.aliyun.com/document_detail/85198.html).
    std::shared_ptr<string> code_ = nullptr;
    // The response parameters.
    std::shared_ptr<VerifyMobileResponseBodyGateVerifyResultDTO> gateVerifyResultDTO_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
