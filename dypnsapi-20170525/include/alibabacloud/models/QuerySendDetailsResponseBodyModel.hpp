// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSENDDETAILSRESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_QUERYSENDDETAILSRESPONSEBODYMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class QuerySendDetailsResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySendDetailsResponseBodyModel& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_TO_JSON(ReceiveDate, receiveDate_);
      DARABONBA_PTR_TO_JSON(SendDate, sendDate_);
      DARABONBA_PTR_TO_JSON(SendStatus, sendStatus_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySendDetailsResponseBodyModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_FROM_JSON(ReceiveDate, receiveDate_);
      DARABONBA_PTR_FROM_JSON(SendDate, sendDate_);
      DARABONBA_PTR_FROM_JSON(SendStatus, sendStatus_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    QuerySendDetailsResponseBodyModel() = default ;
    QuerySendDetailsResponseBodyModel(const QuerySendDetailsResponseBodyModel &) = default ;
    QuerySendDetailsResponseBodyModel(QuerySendDetailsResponseBodyModel &&) = default ;
    QuerySendDetailsResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySendDetailsResponseBodyModel() = default ;
    QuerySendDetailsResponseBodyModel& operator=(const QuerySendDetailsResponseBodyModel &) = default ;
    QuerySendDetailsResponseBodyModel& operator=(QuerySendDetailsResponseBodyModel &&) = default ;
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
    inline QuerySendDetailsResponseBodyModel& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline QuerySendDetailsResponseBodyModel& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline QuerySendDetailsResponseBodyModel& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // phoneNum Field Functions 
    bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
    void deletePhoneNum() { this->phoneNum_ = nullptr;};
    inline string phoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
    inline QuerySendDetailsResponseBodyModel& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


    // receiveDate Field Functions 
    bool hasReceiveDate() const { return this->receiveDate_ != nullptr;};
    void deleteReceiveDate() { this->receiveDate_ = nullptr;};
    inline string receiveDate() const { DARABONBA_PTR_GET_DEFAULT(receiveDate_, "") };
    inline QuerySendDetailsResponseBodyModel& setReceiveDate(string receiveDate) { DARABONBA_PTR_SET_VALUE(receiveDate_, receiveDate) };


    // sendDate Field Functions 
    bool hasSendDate() const { return this->sendDate_ != nullptr;};
    void deleteSendDate() { this->sendDate_ = nullptr;};
    inline string sendDate() const { DARABONBA_PTR_GET_DEFAULT(sendDate_, "") };
    inline QuerySendDetailsResponseBodyModel& setSendDate(string sendDate) { DARABONBA_PTR_SET_VALUE(sendDate_, sendDate) };


    // sendStatus Field Functions 
    bool hasSendStatus() const { return this->sendStatus_ != nullptr;};
    void deleteSendStatus() { this->sendStatus_ = nullptr;};
    inline int64_t sendStatus() const { DARABONBA_PTR_GET_DEFAULT(sendStatus_, 0L) };
    inline QuerySendDetailsResponseBodyModel& setSendStatus(int64_t sendStatus) { DARABONBA_PTR_SET_VALUE(sendStatus_, sendStatus) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline QuerySendDetailsResponseBodyModel& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // The content of the text message.
    std::shared_ptr<string> content_ = nullptr;
    // The status code returned by the carrier.
    // 
    // *   If the text message was delivered, "DELIVERED" is returned.
    // *   If the text message failed to be sent, see [Error codes](https://help.aliyun.com/document_detail/101347.html?spm=a2c4g.419277.0.i8) for more information.
    std::shared_ptr<string> errCode_ = nullptr;
    // The extension field.
    std::shared_ptr<string> outId_ = nullptr;
    // The phone number.
    std::shared_ptr<string> phoneNum_ = nullptr;
    // The date and time when the text message was received.
    std::shared_ptr<string> receiveDate_ = nullptr;
    // The date when the text message was sent. You can query text messages that were sent within the last 30 days.
    // 
    // The date is in the yyyyMMdd format. Example: 20181225.
    std::shared_ptr<string> sendDate_ = nullptr;
    // The delivery status of the text message.
    // 
    // *   1: A delivery receipt is to be sent.
    // *   2: The text message failed to be sent.
    // *   3: The text message was sent.
    std::shared_ptr<int64_t> sendStatus_ = nullptr;
    // The code of the text message template.
    // 
    // Log on to the SMS console. In the left-side navigation pane, click **Go China** or **Go Globe**. You can view the text message template code in the **Template Code** column on the **Message Templates** tab.
    // 
    // >  The text message templates must be created on the Go Globe page and approved.
    std::shared_ptr<string> templateCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
