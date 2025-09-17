// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSENDDETAILSRESPONSEBODYSMSSENDDETAILDTOSSMSSENDDETAILDTO_HPP_
#define ALIBABACLOUD_MODELS_QUERYSENDDETAILSRESPONSEBODYSMSSENDDETAILDTOSSMSSENDDETAILDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_TO_JSON(ReceiveDate, receiveDate_);
      DARABONBA_PTR_TO_JSON(SendDate, sendDate_);
      DARABONBA_PTR_TO_JSON(SendStatus, sendStatus_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_FROM_JSON(ReceiveDate, receiveDate_);
      DARABONBA_PTR_FROM_JSON(SendDate, sendDate_);
      DARABONBA_PTR_FROM_JSON(SendStatus, sendStatus_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO() = default ;
    QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO(const QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO &) = default ;
    QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO(QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO &&) = default ;
    QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO() = default ;
    QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO& operator=(const QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO &) = default ;
    QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO& operator=(QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->errCode_ != nullptr && this->outId_ != nullptr && this->phoneNum_ != nullptr && this->receiveDate_ != nullptr && this->sendDate_ != nullptr
        && this->sendStatus_ != nullptr && this->templateCode_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // phoneNum Field Functions 
    bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
    void deletePhoneNum() { this->phoneNum_ = nullptr;};
    inline string phoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
    inline QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


    // receiveDate Field Functions 
    bool hasReceiveDate() const { return this->receiveDate_ != nullptr;};
    void deleteReceiveDate() { this->receiveDate_ = nullptr;};
    inline string receiveDate() const { DARABONBA_PTR_GET_DEFAULT(receiveDate_, "") };
    inline QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO& setReceiveDate(string receiveDate) { DARABONBA_PTR_SET_VALUE(receiveDate_, receiveDate) };


    // sendDate Field Functions 
    bool hasSendDate() const { return this->sendDate_ != nullptr;};
    void deleteSendDate() { this->sendDate_ = nullptr;};
    inline string sendDate() const { DARABONBA_PTR_GET_DEFAULT(sendDate_, "") };
    inline QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO& setSendDate(string sendDate) { DARABONBA_PTR_SET_VALUE(sendDate_, sendDate) };


    // sendStatus Field Functions 
    bool hasSendStatus() const { return this->sendStatus_ != nullptr;};
    void deleteSendStatus() { this->sendStatus_ = nullptr;};
    inline int64_t sendStatus() const { DARABONBA_PTR_GET_DEFAULT(sendStatus_, 0L) };
    inline QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO& setSendStatus(int64_t sendStatus) { DARABONBA_PTR_SET_VALUE(sendStatus_, sendStatus) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // The content of the message.
    std::shared_ptr<string> content_ = nullptr;
    // The status code returned by the carrier.
    // 
    // *   If the message is delivered, "DELIVERED" is returned.
    // *   For information about the error codes that may be returned if the message is not delivered, see [error codes](https://help.aliyun.com/document_detail/101347.html).
    std::shared_ptr<string> errCode_ = nullptr;
    // The extended field.
    std::shared_ptr<string> outId_ = nullptr;
    // The mobile numbers of the recipients.
    std::shared_ptr<string> phoneNum_ = nullptr;
    // The date and time when the message was received.
    std::shared_ptr<string> receiveDate_ = nullptr;
    // The date and time when the message was sent.
    std::shared_ptr<string> sendDate_ = nullptr;
    // The delivery status of the message. Valid values:
    // 
    // *   **1**: The message has not received a delivery receipt yet.
    // *   **2**: The message failed to be delivered.
    // *   **3**: The message was delivered.
    std::shared_ptr<int64_t> sendStatus_ = nullptr;
    // The ID of the message template.
    std::shared_ptr<string> templateCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
