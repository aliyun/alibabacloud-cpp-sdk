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
    virtual bool empty() const override { this->cardCodeType_ != nullptr
        && this->cardLinkType_ != nullptr && this->cardTemplateCode_ != nullptr && this->cardTemplateParamJson_ != nullptr && this->customShortCodeJson_ != nullptr && this->domain_ != nullptr
        && this->outId_ != nullptr && this->phoneNumberJson_ != nullptr && this->signNameJson_ != nullptr; };
    // cardCodeType Field Functions 
    bool hasCardCodeType() const { return this->cardCodeType_ != nullptr;};
    void deleteCardCodeType() { this->cardCodeType_ = nullptr;};
    inline int32_t cardCodeType() const { DARABONBA_PTR_GET_DEFAULT(cardCodeType_, 0) };
    inline GetCardSmsLinkRequest& setCardCodeType(int32_t cardCodeType) { DARABONBA_PTR_SET_VALUE(cardCodeType_, cardCodeType) };


    // cardLinkType Field Functions 
    bool hasCardLinkType() const { return this->cardLinkType_ != nullptr;};
    void deleteCardLinkType() { this->cardLinkType_ = nullptr;};
    inline int32_t cardLinkType() const { DARABONBA_PTR_GET_DEFAULT(cardLinkType_, 0) };
    inline GetCardSmsLinkRequest& setCardLinkType(int32_t cardLinkType) { DARABONBA_PTR_SET_VALUE(cardLinkType_, cardLinkType) };


    // cardTemplateCode Field Functions 
    bool hasCardTemplateCode() const { return this->cardTemplateCode_ != nullptr;};
    void deleteCardTemplateCode() { this->cardTemplateCode_ = nullptr;};
    inline string cardTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(cardTemplateCode_, "") };
    inline GetCardSmsLinkRequest& setCardTemplateCode(string cardTemplateCode) { DARABONBA_PTR_SET_VALUE(cardTemplateCode_, cardTemplateCode) };


    // cardTemplateParamJson Field Functions 
    bool hasCardTemplateParamJson() const { return this->cardTemplateParamJson_ != nullptr;};
    void deleteCardTemplateParamJson() { this->cardTemplateParamJson_ = nullptr;};
    inline string cardTemplateParamJson() const { DARABONBA_PTR_GET_DEFAULT(cardTemplateParamJson_, "") };
    inline GetCardSmsLinkRequest& setCardTemplateParamJson(string cardTemplateParamJson) { DARABONBA_PTR_SET_VALUE(cardTemplateParamJson_, cardTemplateParamJson) };


    // customShortCodeJson Field Functions 
    bool hasCustomShortCodeJson() const { return this->customShortCodeJson_ != nullptr;};
    void deleteCustomShortCodeJson() { this->customShortCodeJson_ = nullptr;};
    inline string customShortCodeJson() const { DARABONBA_PTR_GET_DEFAULT(customShortCodeJson_, "") };
    inline GetCardSmsLinkRequest& setCustomShortCodeJson(string customShortCodeJson) { DARABONBA_PTR_SET_VALUE(customShortCodeJson_, customShortCodeJson) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetCardSmsLinkRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline GetCardSmsLinkRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // phoneNumberJson Field Functions 
    bool hasPhoneNumberJson() const { return this->phoneNumberJson_ != nullptr;};
    void deletePhoneNumberJson() { this->phoneNumberJson_ = nullptr;};
    inline string phoneNumberJson() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberJson_, "") };
    inline GetCardSmsLinkRequest& setPhoneNumberJson(string phoneNumberJson) { DARABONBA_PTR_SET_VALUE(phoneNumberJson_, phoneNumberJson) };


    // signNameJson Field Functions 
    bool hasSignNameJson() const { return this->signNameJson_ != nullptr;};
    void deleteSignNameJson() { this->signNameJson_ = nullptr;};
    inline string signNameJson() const { DARABONBA_PTR_GET_DEFAULT(signNameJson_, "") };
    inline GetCardSmsLinkRequest& setSignNameJson(string signNameJson) { DARABONBA_PTR_SET_VALUE(signNameJson_, signNameJson) };


  protected:
    // The code type of the URLs.
    // 
    // *   **1**: group texting
    // *   **2**: personalization
    std::shared_ptr<int32_t> cardCodeType_ = nullptr;
    // The type of the short URLs.
    // 
    // *   1: standard short code.
    // *   2: custom short code.
    // 
    // > If the **CardLinkType** is not specified, standard short codes are generated. If you need to generate custom short codes, contact Alibaba Cloud SMS technical support.
    std::shared_ptr<int32_t> cardLinkType_ = nullptr;
    // The code of the message template. You can view the template code in the **Template Code** column on the **Templates** tab of the **Go China** page in the Alibaba Cloud SMS console.
    // 
    // > Make sure that the message template has been approved.
    // 
    // This parameter is required.
    std::shared_ptr<string> cardTemplateCode_ = nullptr;
    // The variables of the message template.
    std::shared_ptr<string> cardTemplateParamJson_ = nullptr;
    // The custom short code. It can contain 4 to 8 digits or letters.
    // 
    // > If the CardLinkType parameter is set to 2, the CustomShortCodeJson parameter is required.
    std::shared_ptr<string> customShortCodeJson_ = nullptr;
    // The original domain name. You must submit domain names for approval in advance.
    // 
    // > 
    // 
    // *   If the **CardLinkType** parameter is set to **2**, the **Domain** parameter is required.
    // 
    // *   The **Domain** parameter cannot exceed 100 characters in length. If the parameter is not specified, a default domain name is used.
    std::shared_ptr<string> domain_ = nullptr;
    // The extension field.
    std::shared_ptr<string> outId_ = nullptr;
    // The mobile phone numbers of recipients, custom identifiers, or system identifiers.
    // 
    // > 
    // 
    // *   A maximum of 10,000 mobile phone numbers are supported.
    // 
    // *   You can enter custom identifier. Each identifier can be a maximum of 60 characters in length.
    // 
    // *   You can apply for a maximum of 10 OPPO templates at a time.
    std::shared_ptr<string> phoneNumberJson_ = nullptr;
    // The signature. You can view the template code in the **Signature** column on the **Signaturess** tab of the **Go China** page in the Alibaba Cloud SMS console.
    // 
    // > The signatures must be approved and correspond to the mobile numbers in sequence.
    // 
    // This parameter is required.
    std::shared_ptr<string> signNameJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
