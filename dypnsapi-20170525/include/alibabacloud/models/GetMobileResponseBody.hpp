// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMOBILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMOBILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMobileResponseBodyGetMobileResultDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class GetMobileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMobileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GetMobileResultDTO, getMobileResultDTO_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMobileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GetMobileResultDTO, getMobileResultDTO_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMobileResponseBody() = default ;
    GetMobileResponseBody(const GetMobileResponseBody &) = default ;
    GetMobileResponseBody(GetMobileResponseBody &&) = default ;
    GetMobileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMobileResponseBody() = default ;
    GetMobileResponseBody& operator=(const GetMobileResponseBody &) = default ;
    GetMobileResponseBody& operator=(GetMobileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->getMobileResultDTO_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMobileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // getMobileResultDTO Field Functions 
    bool hasGetMobileResultDTO() const { return this->getMobileResultDTO_ != nullptr;};
    void deleteGetMobileResultDTO() { this->getMobileResultDTO_ = nullptr;};
    inline const GetMobileResponseBodyGetMobileResultDTO & getMobileResultDTO() const { DARABONBA_PTR_GET_CONST(getMobileResultDTO_, GetMobileResponseBodyGetMobileResultDTO) };
    inline GetMobileResponseBodyGetMobileResultDTO getMobileResultDTO() { DARABONBA_PTR_GET(getMobileResultDTO_, GetMobileResponseBodyGetMobileResultDTO) };
    inline GetMobileResponseBody& setGetMobileResultDTO(const GetMobileResponseBodyGetMobileResultDTO & getMobileResultDTO) { DARABONBA_PTR_SET_VALUE(getMobileResultDTO_, getMobileResultDTO) };
    inline GetMobileResponseBody& setGetMobileResultDTO(GetMobileResponseBodyGetMobileResultDTO && getMobileResultDTO) { DARABONBA_PTR_SET_RVALUE(getMobileResultDTO_, getMobileResultDTO) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMobileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMobileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   If OK is returned, the request is successful.
    // *   For more information about other error codes, see [API response codes](https://help.aliyun.com/document_detail/85198.html).
    std::shared_ptr<string> code_ = nullptr;
    // The response parameters.
    std::shared_ptr<GetMobileResponseBodyGetMobileResultDTO> getMobileResultDTO_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
