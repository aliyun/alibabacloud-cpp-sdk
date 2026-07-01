// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARDSMSLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCARDSMSLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetCardSmsLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCardSmsLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CardCodeType, cardCodeType_);
      DARABONBA_PTR_TO_JSON(CardLinkType, cardLinkType_);
      DARABONBA_PTR_TO_JSON(CardTemplateCode, cardTemplateCode_);
      DARABONBA_PTR_TO_JSON(CardTemplateParamJson, cardTemplateParamJson_);
      DARABONBA_PTR_TO_JSON(CustomShortCodeJson, customShortCodeJson_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(PhoneNumberJson, phoneNumberJson_);
      DARABONBA_PTR_TO_JSON(SignNameJson, signNameJson_);
    };
    friend void from_json(const Darabonba::Json& j, GetCardSmsLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CardCodeType, cardCodeType_);
      DARABONBA_PTR_FROM_JSON(CardLinkType, cardLinkType_);
      DARABONBA_PTR_FROM_JSON(CardTemplateCode, cardTemplateCode_);
      DARABONBA_PTR_FROM_JSON(CardTemplateParamJson, cardTemplateParamJson_);
      DARABONBA_PTR_FROM_JSON(CustomShortCodeJson, customShortCodeJson_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumberJson, phoneNumberJson_);
      DARABONBA_PTR_FROM_JSON(SignNameJson, signNameJson_);
    };
    GetCardSmsLinkRequest() = default ;
    GetCardSmsLinkRequest(const GetCardSmsLinkRequest &) = default ;
    GetCardSmsLinkRequest(GetCardSmsLinkRequest &&) = default ;
    GetCardSmsLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCardSmsLinkRequest() = default ;
    GetCardSmsLinkRequest& operator=(const GetCardSmsLinkRequest &) = default ;
    GetCardSmsLinkRequest& operator=(GetCardSmsLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cardCodeType_ == nullptr
        && this->cardLinkType_ == nullptr && this->cardTemplateCode_ == nullptr && this->cardTemplateParamJson_ == nullptr && this->customShortCodeJson_ == nullptr && this->domain_ == nullptr
        && this->outId_ == nullptr && this->phoneNumberJson_ == nullptr && this->signNameJson_ == nullptr; };
    // cardCodeType Field Functions 
    bool hasCardCodeType() const { return this->cardCodeType_ != nullptr;};
    void deleteCardCodeType() { this->cardCodeType_ = nullptr;};
    inline int32_t getCardCodeType() const { DARABONBA_PTR_GET_DEFAULT(cardCodeType_, 0) };
    inline GetCardSmsLinkRequest& setCardCodeType(int32_t cardCodeType) { DARABONBA_PTR_SET_VALUE(cardCodeType_, cardCodeType) };


    // cardLinkType Field Functions 
    bool hasCardLinkType() const { return this->cardLinkType_ != nullptr;};
    void deleteCardLinkType() { this->cardLinkType_ = nullptr;};
    inline int32_t getCardLinkType() const { DARABONBA_PTR_GET_DEFAULT(cardLinkType_, 0) };
    inline GetCardSmsLinkRequest& setCardLinkType(int32_t cardLinkType) { DARABONBA_PTR_SET_VALUE(cardLinkType_, cardLinkType) };


    // cardTemplateCode Field Functions 
    bool hasCardTemplateCode() const { return this->cardTemplateCode_ != nullptr;};
    void deleteCardTemplateCode() { this->cardTemplateCode_ = nullptr;};
    inline string getCardTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(cardTemplateCode_, "") };
    inline GetCardSmsLinkRequest& setCardTemplateCode(string cardTemplateCode) { DARABONBA_PTR_SET_VALUE(cardTemplateCode_, cardTemplateCode) };


    // cardTemplateParamJson Field Functions 
    bool hasCardTemplateParamJson() const { return this->cardTemplateParamJson_ != nullptr;};
    void deleteCardTemplateParamJson() { this->cardTemplateParamJson_ = nullptr;};
    inline string getCardTemplateParamJson() const { DARABONBA_PTR_GET_DEFAULT(cardTemplateParamJson_, "") };
    inline GetCardSmsLinkRequest& setCardTemplateParamJson(string cardTemplateParamJson) { DARABONBA_PTR_SET_VALUE(cardTemplateParamJson_, cardTemplateParamJson) };


    // customShortCodeJson Field Functions 
    bool hasCustomShortCodeJson() const { return this->customShortCodeJson_ != nullptr;};
    void deleteCustomShortCodeJson() { this->customShortCodeJson_ = nullptr;};
    inline string getCustomShortCodeJson() const { DARABONBA_PTR_GET_DEFAULT(customShortCodeJson_, "") };
    inline GetCardSmsLinkRequest& setCustomShortCodeJson(string customShortCodeJson) { DARABONBA_PTR_SET_VALUE(customShortCodeJson_, customShortCodeJson) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetCardSmsLinkRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline GetCardSmsLinkRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // phoneNumberJson Field Functions 
    bool hasPhoneNumberJson() const { return this->phoneNumberJson_ != nullptr;};
    void deletePhoneNumberJson() { this->phoneNumberJson_ = nullptr;};
    inline string getPhoneNumberJson() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberJson_, "") };
    inline GetCardSmsLinkRequest& setPhoneNumberJson(string phoneNumberJson) { DARABONBA_PTR_SET_VALUE(phoneNumberJson_, phoneNumberJson) };


    // signNameJson Field Functions 
    bool hasSignNameJson() const { return this->signNameJson_ != nullptr;};
    void deleteSignNameJson() { this->signNameJson_ = nullptr;};
    inline string getSignNameJson() const { DARABONBA_PTR_GET_DEFAULT(signNameJson_, "") };
    inline GetCardSmsLinkRequest& setSignNameJson(string signNameJson) { DARABONBA_PTR_SET_VALUE(signNameJson_, signNameJson) };


  protected:
    // The encoding type of the short URL for the card message. Valid values:
    // - 1: bulk sending.
    // - 2: personalized.
    shared_ptr<int32_t> cardCodeType_ {};
    // The type of the short URL for the card message. Valid values:
    // - 1: standard short URL.
    // - 2: custom short URL.
    // 
    // > If **CardLinkType** is left empty, the default value is standard short URL. To generate a custom short URL, contact Alibaba Cloud operations to register in advance.
    shared_ptr<int32_t> cardLinkType_ {};
    // The code of the card message template. In the console, go to the [Card Messages > Template Management](https://dysms.console.aliyun.com/domestic/card) page and select the code of an approved card message template.
    // 
    // This parameter is required.
    shared_ptr<string> cardTemplateCode_ {};
    // The variables of the card message template.
    shared_ptr<string> cardTemplateParamJson_ {};
    // The custom short code. The value must be 4 to 8 digits or letters.
    // 
    // > This parameter is required when the generation type is custom short URL.
    shared_ptr<string> customShortCodeJson_ {};
    // The short URL domain assigned to the sending account. The domain must be registered in advance.
    // 
    // > - When **CardLinkType** is set to **2**, the **Domain** parameter is required.
    // > - If the **Domain** parameter is left empty, the system default domain is used. The value can be up to 100 characters in length.
    shared_ptr<string> domain_ {};
    // The external extension field.
    shared_ptr<string> outId_ {};
    // The phone number, user ID, or internal system identifier.
    // 
    // > - Supports up to 10,000 phone numbers.
    // > - You can also specify a custom identifier of up to 60 characters.
    // > - For OPPO templates, you can submit up to 10 requests at a time.
    shared_ptr<string> phoneNumberJson_ {};
    // The signature name of the SMS message.
    // In the console, go to the [Domestic Messages > Signature Management](https://dysms.console.aliyun.com/domestic/text/sign) tab and view the name in the **Signature Name** column. You can also call the [QuerySmsSignList](https://www.alibabacloud.com/help/en/sms/developer-reference/api-dysmsapi-2017-05-25-querysmssignlist) operation to view SMS signature names.
    // 
    // > The signature must be added and approved. The number of SMS signatures must match the number of phone numbers, and each signature must correspond to a phone number.
    // 
    // This parameter is required.
    shared_ptr<string> signNameJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
