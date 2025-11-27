// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARDSMSLINKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCARDSMSLINKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetCardSmsLinkResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCardSmsLinkResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CardPhoneNumbers, cardPhoneNumbers_);
      DARABONBA_PTR_TO_JSON(CardSignNames, cardSignNames_);
      DARABONBA_PTR_TO_JSON(CardSmsLinks, cardSmsLinks_);
      DARABONBA_PTR_TO_JSON(CardTmpState, cardTmpState_);
      DARABONBA_PTR_TO_JSON(NotMediaMobiles, notMediaMobiles_);
    };
    friend void from_json(const Darabonba::Json& j, GetCardSmsLinkResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CardPhoneNumbers, cardPhoneNumbers_);
      DARABONBA_PTR_FROM_JSON(CardSignNames, cardSignNames_);
      DARABONBA_PTR_FROM_JSON(CardSmsLinks, cardSmsLinks_);
      DARABONBA_PTR_FROM_JSON(CardTmpState, cardTmpState_);
      DARABONBA_PTR_FROM_JSON(NotMediaMobiles, notMediaMobiles_);
    };
    GetCardSmsLinkResponseBodyData() = default ;
    GetCardSmsLinkResponseBodyData(const GetCardSmsLinkResponseBodyData &) = default ;
    GetCardSmsLinkResponseBodyData(GetCardSmsLinkResponseBodyData &&) = default ;
    GetCardSmsLinkResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCardSmsLinkResponseBodyData() = default ;
    GetCardSmsLinkResponseBodyData& operator=(const GetCardSmsLinkResponseBodyData &) = default ;
    GetCardSmsLinkResponseBodyData& operator=(GetCardSmsLinkResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cardPhoneNumbers_ == nullptr
        && return this->cardSignNames_ == nullptr && return this->cardSmsLinks_ == nullptr && return this->cardTmpState_ == nullptr && return this->notMediaMobiles_ == nullptr; };
    // cardPhoneNumbers Field Functions 
    bool hasCardPhoneNumbers() const { return this->cardPhoneNumbers_ != nullptr;};
    void deleteCardPhoneNumbers() { this->cardPhoneNumbers_ = nullptr;};
    inline string cardPhoneNumbers() const { DARABONBA_PTR_GET_DEFAULT(cardPhoneNumbers_, "") };
    inline GetCardSmsLinkResponseBodyData& setCardPhoneNumbers(string cardPhoneNumbers) { DARABONBA_PTR_SET_VALUE(cardPhoneNumbers_, cardPhoneNumbers) };


    // cardSignNames Field Functions 
    bool hasCardSignNames() const { return this->cardSignNames_ != nullptr;};
    void deleteCardSignNames() { this->cardSignNames_ = nullptr;};
    inline string cardSignNames() const { DARABONBA_PTR_GET_DEFAULT(cardSignNames_, "") };
    inline GetCardSmsLinkResponseBodyData& setCardSignNames(string cardSignNames) { DARABONBA_PTR_SET_VALUE(cardSignNames_, cardSignNames) };


    // cardSmsLinks Field Functions 
    bool hasCardSmsLinks() const { return this->cardSmsLinks_ != nullptr;};
    void deleteCardSmsLinks() { this->cardSmsLinks_ = nullptr;};
    inline string cardSmsLinks() const { DARABONBA_PTR_GET_DEFAULT(cardSmsLinks_, "") };
    inline GetCardSmsLinkResponseBodyData& setCardSmsLinks(string cardSmsLinks) { DARABONBA_PTR_SET_VALUE(cardSmsLinks_, cardSmsLinks) };


    // cardTmpState Field Functions 
    bool hasCardTmpState() const { return this->cardTmpState_ != nullptr;};
    void deleteCardTmpState() { this->cardTmpState_ = nullptr;};
    inline int32_t cardTmpState() const { DARABONBA_PTR_GET_DEFAULT(cardTmpState_, 0) };
    inline GetCardSmsLinkResponseBodyData& setCardTmpState(int32_t cardTmpState) { DARABONBA_PTR_SET_VALUE(cardTmpState_, cardTmpState) };


    // notMediaMobiles Field Functions 
    bool hasNotMediaMobiles() const { return this->notMediaMobiles_ != nullptr;};
    void deleteNotMediaMobiles() { this->notMediaMobiles_ = nullptr;};
    inline string notMediaMobiles() const { DARABONBA_PTR_GET_DEFAULT(notMediaMobiles_, "") };
    inline GetCardSmsLinkResponseBodyData& setNotMediaMobiles(string notMediaMobiles) { DARABONBA_PTR_SET_VALUE(notMediaMobiles_, notMediaMobiles) };


  protected:
    // The mobile phone numbers that support card messages.
    std::shared_ptr<string> cardPhoneNumbers_ = nullptr;
    // The signatures must correspond to the mobile numbers and short URLs in sequence.
    std::shared_ptr<string> cardSignNames_ = nullptr;
    // The short URLs.
    std::shared_ptr<string> cardSmsLinks_ = nullptr;
    // The review status of the card message template.
    // 
    // *   **0**: pending approval
    // *   **1**: approved
    // *   **2**: rejected
    // 
    // > Unapproved card messages are rolled back.
    std::shared_ptr<int32_t> cardTmpState_ = nullptr;
    // The mobile phone numbers that do not support card messages.
    std::shared_ptr<string> notMediaMobiles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
