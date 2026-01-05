// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARDSMSLINKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCARDSMSLINKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetCardSmsLinkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCardSmsLinkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCardSmsLinkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCardSmsLinkResponseBody() = default ;
    GetCardSmsLinkResponseBody(const GetCardSmsLinkResponseBody &) = default ;
    GetCardSmsLinkResponseBody(GetCardSmsLinkResponseBody &&) = default ;
    GetCardSmsLinkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCardSmsLinkResponseBody() = default ;
    GetCardSmsLinkResponseBody& operator=(const GetCardSmsLinkResponseBody &) = default ;
    GetCardSmsLinkResponseBody& operator=(GetCardSmsLinkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CardPhoneNumbers, cardPhoneNumbers_);
        DARABONBA_PTR_TO_JSON(CardSignNames, cardSignNames_);
        DARABONBA_PTR_TO_JSON(CardSmsLinks, cardSmsLinks_);
        DARABONBA_PTR_TO_JSON(CardTmpState, cardTmpState_);
        DARABONBA_PTR_TO_JSON(NotMediaMobiles, notMediaMobiles_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CardPhoneNumbers, cardPhoneNumbers_);
        DARABONBA_PTR_FROM_JSON(CardSignNames, cardSignNames_);
        DARABONBA_PTR_FROM_JSON(CardSmsLinks, cardSmsLinks_);
        DARABONBA_PTR_FROM_JSON(CardTmpState, cardTmpState_);
        DARABONBA_PTR_FROM_JSON(NotMediaMobiles, notMediaMobiles_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cardPhoneNumbers_ == nullptr
        && this->cardSignNames_ == nullptr && this->cardSmsLinks_ == nullptr && this->cardTmpState_ == nullptr && this->notMediaMobiles_ == nullptr; };
      // cardPhoneNumbers Field Functions 
      bool hasCardPhoneNumbers() const { return this->cardPhoneNumbers_ != nullptr;};
      void deleteCardPhoneNumbers() { this->cardPhoneNumbers_ = nullptr;};
      inline string getCardPhoneNumbers() const { DARABONBA_PTR_GET_DEFAULT(cardPhoneNumbers_, "") };
      inline Data& setCardPhoneNumbers(string cardPhoneNumbers) { DARABONBA_PTR_SET_VALUE(cardPhoneNumbers_, cardPhoneNumbers) };


      // cardSignNames Field Functions 
      bool hasCardSignNames() const { return this->cardSignNames_ != nullptr;};
      void deleteCardSignNames() { this->cardSignNames_ = nullptr;};
      inline string getCardSignNames() const { DARABONBA_PTR_GET_DEFAULT(cardSignNames_, "") };
      inline Data& setCardSignNames(string cardSignNames) { DARABONBA_PTR_SET_VALUE(cardSignNames_, cardSignNames) };


      // cardSmsLinks Field Functions 
      bool hasCardSmsLinks() const { return this->cardSmsLinks_ != nullptr;};
      void deleteCardSmsLinks() { this->cardSmsLinks_ = nullptr;};
      inline string getCardSmsLinks() const { DARABONBA_PTR_GET_DEFAULT(cardSmsLinks_, "") };
      inline Data& setCardSmsLinks(string cardSmsLinks) { DARABONBA_PTR_SET_VALUE(cardSmsLinks_, cardSmsLinks) };


      // cardTmpState Field Functions 
      bool hasCardTmpState() const { return this->cardTmpState_ != nullptr;};
      void deleteCardTmpState() { this->cardTmpState_ = nullptr;};
      inline int32_t getCardTmpState() const { DARABONBA_PTR_GET_DEFAULT(cardTmpState_, 0) };
      inline Data& setCardTmpState(int32_t cardTmpState) { DARABONBA_PTR_SET_VALUE(cardTmpState_, cardTmpState) };


      // notMediaMobiles Field Functions 
      bool hasNotMediaMobiles() const { return this->notMediaMobiles_ != nullptr;};
      void deleteNotMediaMobiles() { this->notMediaMobiles_ = nullptr;};
      inline string getNotMediaMobiles() const { DARABONBA_PTR_GET_DEFAULT(notMediaMobiles_, "") };
      inline Data& setNotMediaMobiles(string notMediaMobiles) { DARABONBA_PTR_SET_VALUE(notMediaMobiles_, notMediaMobiles) };


    protected:
      // The mobile phone numbers that support card messages.
      shared_ptr<string> cardPhoneNumbers_ {};
      // The signatures must correspond to the mobile numbers and short URLs in sequence.
      shared_ptr<string> cardSignNames_ {};
      // The short URLs.
      shared_ptr<string> cardSmsLinks_ {};
      // The review status of the card message template.
      // 
      // *   **0**: pending approval
      // *   **1**: approved
      // *   **2**: rejected
      // 
      // > Unapproved card messages are rolled back.
      shared_ptr<int32_t> cardTmpState_ {};
      // The mobile phone numbers that do not support card messages.
      shared_ptr<string> notMediaMobiles_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCardSmsLinkResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCardSmsLinkResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCardSmsLinkResponseBody::Data) };
    inline GetCardSmsLinkResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCardSmsLinkResponseBody::Data) };
    inline GetCardSmsLinkResponseBody& setData(const GetCardSmsLinkResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCardSmsLinkResponseBody& setData(GetCardSmsLinkResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCardSmsLinkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCardSmsLinkResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other values indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/101346.html).
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<GetCardSmsLinkResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
