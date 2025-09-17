// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARDSMSDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCARDSMSDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCardSmsDetailsResponseBodyCardSendDetailDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetCardSmsDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCardSmsDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(CardSendDetailDTO, cardSendDetailDTO_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCardSmsDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(CardSendDetailDTO, cardSendDetailDTO_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCardSmsDetailsResponseBody() = default ;
    GetCardSmsDetailsResponseBody(const GetCardSmsDetailsResponseBody &) = default ;
    GetCardSmsDetailsResponseBody(GetCardSmsDetailsResponseBody &&) = default ;
    GetCardSmsDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCardSmsDetailsResponseBody() = default ;
    GetCardSmsDetailsResponseBody& operator=(const GetCardSmsDetailsResponseBody &) = default ;
    GetCardSmsDetailsResponseBody& operator=(GetCardSmsDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->cardSendDetailDTO_ != nullptr && this->code_ != nullptr && this->message_ != nullptr && this->success_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetCardSmsDetailsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // cardSendDetailDTO Field Functions 
    bool hasCardSendDetailDTO() const { return this->cardSendDetailDTO_ != nullptr;};
    void deleteCardSendDetailDTO() { this->cardSendDetailDTO_ = nullptr;};
    inline const GetCardSmsDetailsResponseBodyCardSendDetailDTO & cardSendDetailDTO() const { DARABONBA_PTR_GET_CONST(cardSendDetailDTO_, GetCardSmsDetailsResponseBodyCardSendDetailDTO) };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTO cardSendDetailDTO() { DARABONBA_PTR_GET(cardSendDetailDTO_, GetCardSmsDetailsResponseBodyCardSendDetailDTO) };
    inline GetCardSmsDetailsResponseBody& setCardSendDetailDTO(const GetCardSmsDetailsResponseBodyCardSendDetailDTO & cardSendDetailDTO) { DARABONBA_PTR_SET_VALUE(cardSendDetailDTO_, cardSendDetailDTO) };
    inline GetCardSmsDetailsResponseBody& setCardSendDetailDTO(GetCardSmsDetailsResponseBodyCardSendDetailDTO && cardSendDetailDTO) { DARABONBA_PTR_SET_RVALUE(cardSendDetailDTO_, cardSendDetailDTO) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCardSmsDetailsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCardSmsDetailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCardSmsDetailsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Access denied detail; this field is returned only if the RAM check fails.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // Card SMS sending result
    std::shared_ptr<GetCardSmsDetailsResponseBodyCardSendDetailDTO> cardSendDetailDTO_ = nullptr;
    // Request status code.
    // * OK indicates a successful request.
    // * For other error codes, see [API Error Codes](https://help.aliyun.com/document_detail/101346.html).
    std::shared_ptr<string> code_ = nullptr;
    // Description of the status code.
    std::shared_ptr<string> message_ = nullptr;
    // Indicates whether the API call was successful. Values:
    // - **true** - **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
