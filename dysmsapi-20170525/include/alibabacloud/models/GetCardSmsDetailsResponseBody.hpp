// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARDSMSDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCARDSMSDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class CardSendDetailDTO : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CardSendDetailDTO& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, CardSendDetailDTO& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      CardSendDetailDTO() = default ;
      CardSendDetailDTO(const CardSendDetailDTO &) = default ;
      CardSendDetailDTO(CardSendDetailDTO &&) = default ;
      CardSendDetailDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CardSendDetailDTO() = default ;
      CardSendDetailDTO& operator=(const CardSendDetailDTO &) = default ;
      CardSendDetailDTO& operator=(CardSendDetailDTO &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
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
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errCode_ == nullptr
        && this->outId_ == nullptr && this->phoneNumber_ == nullptr && this->receiveDate_ == nullptr && this->receiveType_ == nullptr && this->renderDate_ == nullptr
        && this->renderStatus_ == nullptr && this->sendDate_ == nullptr && this->sendStatus_ == nullptr && this->smsContent_ == nullptr && this->templateCode_ == nullptr; };
        // errCode Field Functions 
        bool hasErrCode() const { return this->errCode_ != nullptr;};
        void deleteErrCode() { this->errCode_ = nullptr;};
        inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
        inline Records& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


        // outId Field Functions 
        bool hasOutId() const { return this->outId_ != nullptr;};
        void deleteOutId() { this->outId_ = nullptr;};
        inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
        inline Records& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


        // phoneNumber Field Functions 
        bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
        void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
        inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
        inline Records& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


        // receiveDate Field Functions 
        bool hasReceiveDate() const { return this->receiveDate_ != nullptr;};
        void deleteReceiveDate() { this->receiveDate_ = nullptr;};
        inline string getReceiveDate() const { DARABONBA_PTR_GET_DEFAULT(receiveDate_, "") };
        inline Records& setReceiveDate(string receiveDate) { DARABONBA_PTR_SET_VALUE(receiveDate_, receiveDate) };


        // receiveType Field Functions 
        bool hasReceiveType() const { return this->receiveType_ != nullptr;};
        void deleteReceiveType() { this->receiveType_ = nullptr;};
        inline string getReceiveType() const { DARABONBA_PTR_GET_DEFAULT(receiveType_, "") };
        inline Records& setReceiveType(string receiveType) { DARABONBA_PTR_SET_VALUE(receiveType_, receiveType) };


        // renderDate Field Functions 
        bool hasRenderDate() const { return this->renderDate_ != nullptr;};
        void deleteRenderDate() { this->renderDate_ = nullptr;};
        inline string getRenderDate() const { DARABONBA_PTR_GET_DEFAULT(renderDate_, "") };
        inline Records& setRenderDate(string renderDate) { DARABONBA_PTR_SET_VALUE(renderDate_, renderDate) };


        // renderStatus Field Functions 
        bool hasRenderStatus() const { return this->renderStatus_ != nullptr;};
        void deleteRenderStatus() { this->renderStatus_ = nullptr;};
        inline int64_t getRenderStatus() const { DARABONBA_PTR_GET_DEFAULT(renderStatus_, 0L) };
        inline Records& setRenderStatus(int64_t renderStatus) { DARABONBA_PTR_SET_VALUE(renderStatus_, renderStatus) };


        // sendDate Field Functions 
        bool hasSendDate() const { return this->sendDate_ != nullptr;};
        void deleteSendDate() { this->sendDate_ = nullptr;};
        inline string getSendDate() const { DARABONBA_PTR_GET_DEFAULT(sendDate_, "") };
        inline Records& setSendDate(string sendDate) { DARABONBA_PTR_SET_VALUE(sendDate_, sendDate) };


        // sendStatus Field Functions 
        bool hasSendStatus() const { return this->sendStatus_ != nullptr;};
        void deleteSendStatus() { this->sendStatus_ = nullptr;};
        inline int64_t getSendStatus() const { DARABONBA_PTR_GET_DEFAULT(sendStatus_, 0L) };
        inline Records& setSendStatus(int64_t sendStatus) { DARABONBA_PTR_SET_VALUE(sendStatus_, sendStatus) };


        // smsContent Field Functions 
        bool hasSmsContent() const { return this->smsContent_ != nullptr;};
        void deleteSmsContent() { this->smsContent_ = nullptr;};
        inline string getSmsContent() const { DARABONBA_PTR_GET_DEFAULT(smsContent_, "") };
        inline Records& setSmsContent(string smsContent) { DARABONBA_PTR_SET_VALUE(smsContent_, smsContent) };


        // templateCode Field Functions 
        bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
        void deleteTemplateCode() { this->templateCode_ = nullptr;};
        inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
        inline Records& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      protected:
        // Error code for sending
        shared_ptr<string> errCode_ {};
        // Customer-transmitted outId
        shared_ptr<string> outId_ {};
        // Phone number that received the SMS
        shared_ptr<string> phoneNumber_ {};
        // Receive date
        shared_ptr<string> receiveDate_ {};
        // Receive SMS type
        shared_ptr<string> receiveType_ {};
        // Render date
        shared_ptr<string> renderDate_ {};
        // Render status. 0: Not rendered; 1: Rendered successfully; 3: Not rendered
        shared_ptr<int64_t> renderStatus_ {};
        // Time when the SMS was sent
        shared_ptr<string> sendDate_ {};
        // Sending status. 1: Sending; 2: Send failed; 3: Sent successfully; 4: Addressing failed
        shared_ptr<int64_t> sendStatus_ {};
        // SMS content. Only applicable for text messages.
        shared_ptr<string> smsContent_ {};
        // Template code
        shared_ptr<string> templateCode_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->records_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
      inline CardSendDetailDTO& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline CardSendDetailDTO& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<CardSendDetailDTO::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<CardSendDetailDTO::Records>) };
      inline vector<CardSendDetailDTO::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<CardSendDetailDTO::Records>) };
      inline CardSendDetailDTO& setRecords(const vector<CardSendDetailDTO::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline CardSendDetailDTO& setRecords(vector<CardSendDetailDTO::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline CardSendDetailDTO& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Current page number
      shared_ptr<int64_t> currentPage_ {};
      // Page size
      shared_ptr<int64_t> pageSize_ {};
      // List of card SMS sending records
      shared_ptr<vector<CardSendDetailDTO::Records>> records_ {};
      // Total count
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->cardSendDetailDTO_ == nullptr && this->code_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetCardSmsDetailsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // cardSendDetailDTO Field Functions 
    bool hasCardSendDetailDTO() const { return this->cardSendDetailDTO_ != nullptr;};
    void deleteCardSendDetailDTO() { this->cardSendDetailDTO_ = nullptr;};
    inline const GetCardSmsDetailsResponseBody::CardSendDetailDTO & getCardSendDetailDTO() const { DARABONBA_PTR_GET_CONST(cardSendDetailDTO_, GetCardSmsDetailsResponseBody::CardSendDetailDTO) };
    inline GetCardSmsDetailsResponseBody::CardSendDetailDTO getCardSendDetailDTO() { DARABONBA_PTR_GET(cardSendDetailDTO_, GetCardSmsDetailsResponseBody::CardSendDetailDTO) };
    inline GetCardSmsDetailsResponseBody& setCardSendDetailDTO(const GetCardSmsDetailsResponseBody::CardSendDetailDTO & cardSendDetailDTO) { DARABONBA_PTR_SET_VALUE(cardSendDetailDTO_, cardSendDetailDTO) };
    inline GetCardSmsDetailsResponseBody& setCardSendDetailDTO(GetCardSmsDetailsResponseBody::CardSendDetailDTO && cardSendDetailDTO) { DARABONBA_PTR_SET_RVALUE(cardSendDetailDTO_, cardSendDetailDTO) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCardSmsDetailsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCardSmsDetailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCardSmsDetailsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Access denied detail; this field is returned only if the RAM check fails.
    shared_ptr<string> accessDeniedDetail_ {};
    // Card SMS sending result
    shared_ptr<GetCardSmsDetailsResponseBody::CardSendDetailDTO> cardSendDetailDTO_ {};
    // Request status code.
    // * OK indicates a successful request.
    // * For other error codes, see [API Error Codes](https://help.aliyun.com/document_detail/101346.html).
    shared_ptr<string> code_ {};
    // Description of the status code.
    shared_ptr<string> message_ {};
    // Indicates whether the API call was successful. Values:
    // - **true** - **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
