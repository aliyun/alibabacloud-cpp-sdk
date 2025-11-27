// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCARDSMSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SENDCARDSMSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SendCardSmsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendCardSmsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BizCardId, bizCardId_);
      DARABONBA_PTR_TO_JSON(BizDigitalId, bizDigitalId_);
      DARABONBA_PTR_TO_JSON(BizSmsId, bizSmsId_);
      DARABONBA_PTR_TO_JSON(CardTmpState, cardTmpState_);
      DARABONBA_PTR_TO_JSON(MediaMobiles, mediaMobiles_);
      DARABONBA_PTR_TO_JSON(NotMediaMobiles, notMediaMobiles_);
    };
    friend void from_json(const Darabonba::Json& j, SendCardSmsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCardId, bizCardId_);
      DARABONBA_PTR_FROM_JSON(BizDigitalId, bizDigitalId_);
      DARABONBA_PTR_FROM_JSON(BizSmsId, bizSmsId_);
      DARABONBA_PTR_FROM_JSON(CardTmpState, cardTmpState_);
      DARABONBA_PTR_FROM_JSON(MediaMobiles, mediaMobiles_);
      DARABONBA_PTR_FROM_JSON(NotMediaMobiles, notMediaMobiles_);
    };
    SendCardSmsResponseBodyData() = default ;
    SendCardSmsResponseBodyData(const SendCardSmsResponseBodyData &) = default ;
    SendCardSmsResponseBodyData(SendCardSmsResponseBodyData &&) = default ;
    SendCardSmsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendCardSmsResponseBodyData() = default ;
    SendCardSmsResponseBodyData& operator=(const SendCardSmsResponseBodyData &) = default ;
    SendCardSmsResponseBodyData& operator=(SendCardSmsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCardId_ == nullptr
        && return this->bizDigitalId_ == nullptr && return this->bizSmsId_ == nullptr && return this->cardTmpState_ == nullptr && return this->mediaMobiles_ == nullptr && return this->notMediaMobiles_ == nullptr; };
    // bizCardId Field Functions 
    bool hasBizCardId() const { return this->bizCardId_ != nullptr;};
    void deleteBizCardId() { this->bizCardId_ = nullptr;};
    inline string bizCardId() const { DARABONBA_PTR_GET_DEFAULT(bizCardId_, "") };
    inline SendCardSmsResponseBodyData& setBizCardId(string bizCardId) { DARABONBA_PTR_SET_VALUE(bizCardId_, bizCardId) };


    // bizDigitalId Field Functions 
    bool hasBizDigitalId() const { return this->bizDigitalId_ != nullptr;};
    void deleteBizDigitalId() { this->bizDigitalId_ = nullptr;};
    inline string bizDigitalId() const { DARABONBA_PTR_GET_DEFAULT(bizDigitalId_, "") };
    inline SendCardSmsResponseBodyData& setBizDigitalId(string bizDigitalId) { DARABONBA_PTR_SET_VALUE(bizDigitalId_, bizDigitalId) };


    // bizSmsId Field Functions 
    bool hasBizSmsId() const { return this->bizSmsId_ != nullptr;};
    void deleteBizSmsId() { this->bizSmsId_ = nullptr;};
    inline string bizSmsId() const { DARABONBA_PTR_GET_DEFAULT(bizSmsId_, "") };
    inline SendCardSmsResponseBodyData& setBizSmsId(string bizSmsId) { DARABONBA_PTR_SET_VALUE(bizSmsId_, bizSmsId) };


    // cardTmpState Field Functions 
    bool hasCardTmpState() const { return this->cardTmpState_ != nullptr;};
    void deleteCardTmpState() { this->cardTmpState_ = nullptr;};
    inline int32_t cardTmpState() const { DARABONBA_PTR_GET_DEFAULT(cardTmpState_, 0) };
    inline SendCardSmsResponseBodyData& setCardTmpState(int32_t cardTmpState) { DARABONBA_PTR_SET_VALUE(cardTmpState_, cardTmpState) };


    // mediaMobiles Field Functions 
    bool hasMediaMobiles() const { return this->mediaMobiles_ != nullptr;};
    void deleteMediaMobiles() { this->mediaMobiles_ = nullptr;};
    inline string mediaMobiles() const { DARABONBA_PTR_GET_DEFAULT(mediaMobiles_, "") };
    inline SendCardSmsResponseBodyData& setMediaMobiles(string mediaMobiles) { DARABONBA_PTR_SET_VALUE(mediaMobiles_, mediaMobiles) };


    // notMediaMobiles Field Functions 
    bool hasNotMediaMobiles() const { return this->notMediaMobiles_ != nullptr;};
    void deleteNotMediaMobiles() { this->notMediaMobiles_ = nullptr;};
    inline string notMediaMobiles() const { DARABONBA_PTR_GET_DEFAULT(notMediaMobiles_, "") };
    inline SendCardSmsResponseBodyData& setNotMediaMobiles(string notMediaMobiles) { DARABONBA_PTR_SET_VALUE(notMediaMobiles_, notMediaMobiles) };


  protected:
    // The ID of the card message.
    std::shared_ptr<string> bizCardId_ = nullptr;
    // The ID of the digital message.
    std::shared_ptr<string> bizDigitalId_ = nullptr;
    // The ID of the text message.
    std::shared_ptr<string> bizSmsId_ = nullptr;
    // The review status of the card message template.
    // 
    // *   **0**: pending approval
    // *   **1**: approved
    // *   **2**: rejected
    // 
    // > Unapproved card messages are rolled back.
    std::shared_ptr<int32_t> cardTmpState_ = nullptr;
    // The mobile phone number from which the card message is sent.
    std::shared_ptr<string> mediaMobiles_ = nullptr;
    // The mobile phone number whose card message is rolled back.
    std::shared_ptr<string> notMediaMobiles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
