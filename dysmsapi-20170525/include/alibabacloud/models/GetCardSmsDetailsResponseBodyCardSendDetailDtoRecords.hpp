// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARDSMSDETAILSRESPONSEBODYCARDSENDDETAILDTORECORDS_HPP_
#define ALIBABACLOUD_MODELS_GETCARDSMSDETAILSRESPONSEBODYCARDSENDDETAILDTORECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetCardSmsDetailsResponseBodyCardSendDetailDTORecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCardSmsDetailsResponseBodyCardSendDetailDTORecords& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ReceiveDate, receiveDate_);
      DARABONBA_PTR_TO_JSON(ReceiveType, receiveType_);
      DARABONBA_PTR_TO_JSON(RenderDate, renderDate_);
      DARABONBA_PTR_TO_JSON(RenderStatus, renderStatus_);
      DARABONBA_PTR_TO_JSON(SendDate, sendDate_);
      DARABONBA_PTR_TO_JSON(SendStatus, sendStatus_);
      DARABONBA_PTR_TO_JSON(SmsContent, smsContent_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetCardSmsDetailsResponseBodyCardSendDetailDTORecords& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ReceiveDate, receiveDate_);
      DARABONBA_PTR_FROM_JSON(ReceiveType, receiveType_);
      DARABONBA_PTR_FROM_JSON(RenderDate, renderDate_);
      DARABONBA_PTR_FROM_JSON(RenderStatus, renderStatus_);
      DARABONBA_PTR_FROM_JSON(SendDate, sendDate_);
      DARABONBA_PTR_FROM_JSON(SendStatus, sendStatus_);
      DARABONBA_PTR_FROM_JSON(SmsContent, smsContent_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    GetCardSmsDetailsResponseBodyCardSendDetailDTORecords() = default ;
    GetCardSmsDetailsResponseBodyCardSendDetailDTORecords(const GetCardSmsDetailsResponseBodyCardSendDetailDTORecords &) = default ;
    GetCardSmsDetailsResponseBodyCardSendDetailDTORecords(GetCardSmsDetailsResponseBodyCardSendDetailDTORecords &&) = default ;
    GetCardSmsDetailsResponseBodyCardSendDetailDTORecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCardSmsDetailsResponseBodyCardSendDetailDTORecords() = default ;
    GetCardSmsDetailsResponseBodyCardSendDetailDTORecords& operator=(const GetCardSmsDetailsResponseBodyCardSendDetailDTORecords &) = default ;
    GetCardSmsDetailsResponseBodyCardSendDetailDTORecords& operator=(GetCardSmsDetailsResponseBodyCardSendDetailDTORecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errCode_ == nullptr
        && return this->outId_ == nullptr && return this->phoneNumber_ == nullptr && return this->receiveDate_ == nullptr && return this->receiveType_ == nullptr && return this->renderDate_ == nullptr
        && return this->renderStatus_ == nullptr && return this->sendDate_ == nullptr && return this->sendStatus_ == nullptr && return this->smsContent_ == nullptr && return this->templateCode_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTORecords& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTORecords& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTORecords& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // receiveDate Field Functions 
    bool hasReceiveDate() const { return this->receiveDate_ != nullptr;};
    void deleteReceiveDate() { this->receiveDate_ = nullptr;};
    inline string receiveDate() const { DARABONBA_PTR_GET_DEFAULT(receiveDate_, "") };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTORecords& setReceiveDate(string receiveDate) { DARABONBA_PTR_SET_VALUE(receiveDate_, receiveDate) };


    // receiveType Field Functions 
    bool hasReceiveType() const { return this->receiveType_ != nullptr;};
    void deleteReceiveType() { this->receiveType_ = nullptr;};
    inline string receiveType() const { DARABONBA_PTR_GET_DEFAULT(receiveType_, "") };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTORecords& setReceiveType(string receiveType) { DARABONBA_PTR_SET_VALUE(receiveType_, receiveType) };


    // renderDate Field Functions 
    bool hasRenderDate() const { return this->renderDate_ != nullptr;};
    void deleteRenderDate() { this->renderDate_ = nullptr;};
    inline string renderDate() const { DARABONBA_PTR_GET_DEFAULT(renderDate_, "") };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTORecords& setRenderDate(string renderDate) { DARABONBA_PTR_SET_VALUE(renderDate_, renderDate) };


    // renderStatus Field Functions 
    bool hasRenderStatus() const { return this->renderStatus_ != nullptr;};
    void deleteRenderStatus() { this->renderStatus_ = nullptr;};
    inline int64_t renderStatus() const { DARABONBA_PTR_GET_DEFAULT(renderStatus_, 0L) };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTORecords& setRenderStatus(int64_t renderStatus) { DARABONBA_PTR_SET_VALUE(renderStatus_, renderStatus) };


    // sendDate Field Functions 
    bool hasSendDate() const { return this->sendDate_ != nullptr;};
    void deleteSendDate() { this->sendDate_ = nullptr;};
    inline string sendDate() const { DARABONBA_PTR_GET_DEFAULT(sendDate_, "") };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTORecords& setSendDate(string sendDate) { DARABONBA_PTR_SET_VALUE(sendDate_, sendDate) };


    // sendStatus Field Functions 
    bool hasSendStatus() const { return this->sendStatus_ != nullptr;};
    void deleteSendStatus() { this->sendStatus_ = nullptr;};
    inline int64_t sendStatus() const { DARABONBA_PTR_GET_DEFAULT(sendStatus_, 0L) };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTORecords& setSendStatus(int64_t sendStatus) { DARABONBA_PTR_SET_VALUE(sendStatus_, sendStatus) };


    // smsContent Field Functions 
    bool hasSmsContent() const { return this->smsContent_ != nullptr;};
    void deleteSmsContent() { this->smsContent_ = nullptr;};
    inline string smsContent() const { DARABONBA_PTR_GET_DEFAULT(smsContent_, "") };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTORecords& setSmsContent(string smsContent) { DARABONBA_PTR_SET_VALUE(smsContent_, smsContent) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTORecords& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // Error code for sending
    std::shared_ptr<string> errCode_ = nullptr;
    // Customer-transmitted outId
    std::shared_ptr<string> outId_ = nullptr;
    // Phone number that received the SMS
    std::shared_ptr<string> phoneNumber_ = nullptr;
    // Receive date
    std::shared_ptr<string> receiveDate_ = nullptr;
    // Receive SMS type
    std::shared_ptr<string> receiveType_ = nullptr;
    // Render date
    std::shared_ptr<string> renderDate_ = nullptr;
    // Render status. 0: Not rendered; 1: Rendered successfully; 3: Not rendered
    std::shared_ptr<int64_t> renderStatus_ = nullptr;
    // Time when the SMS was sent
    std::shared_ptr<string> sendDate_ = nullptr;
    // Sending status. 1: Sending; 2: Send failed; 3: Sent successfully; 4: Addressing failed
    std::shared_ptr<int64_t> sendStatus_ = nullptr;
    // SMS content. Only applicable for text messages.
    std::shared_ptr<string> smsContent_ = nullptr;
    // Template code
    std::shared_ptr<string> templateCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
